"""turns a python file into a new project"""
from __future__ import division
import sys, os, re, argparse, hashlib
from PyQt4.QtGui import QWidget, QFileDialog
from PyQt4.QtGui import QPushButton, QGridLayout
from PyQt4.QtGui import QIcon, QApplication, QAction, QMainWindow
from PyQt4.QtCore import SIGNAL, QSize

from datetime import datetime


class GenerateProject(QMainWindow):
    """generate project class"""
    def __init__(self, data, parent=None):
        """initializations"""   
        super(GenerateProject, self).__init__(parent)

        self.license_type = data.license
        self.target_program = ""
        self.target_name = ""
        self.project_path = ""

        self.projecti_parent = "../"
        self.above_projecti = self.projecti_parent+"../"
        self.source_folder = self.projecti_parent+"src/"

        self.license_folder = self.projecti_parent+'docs/licenses/'

        if str(data.name) == 'None':
            self.central_dialog()
            #formatting of input data
            parse1 = re.sub('"', ' ', str(data.name))

            parse2 = re.sub("_", ' ', parse1).strip().lower()

            self.project_path = re.sub(" ", '_', parse2)
            if self.project_path.endswith(".py"):
                self.target_program = os.path.basename(self.project_path)
                self.target_name = re.sub(".py", "", self.target_program)
                self.project_path = os.path.abspath(
                    os.path.join(self.above_projecti, self.target_name))
                os.makedirs(self.target_name)
                
            if self.project_path is not "":
                print "generated" #self.generate_all()

            #self.configure_script(True)
        else:
            print "choose one argument only"
            os._exit(0)

    def open_dialog(self):
        """open file"""   
        filename = str(QFileDialog.getOpenFileName(self, 'Open file', 
            self.above_projecti, "(*.py)"))
        if filename is not "":
            self.target_program = os.path.basename(filename)   
            self.target_name = re.sub(".py", "", self.target_program)
            self.project_path = os.path.abspath(os.path.join(filename, 
                os.pardir, self.target_name))
            os.makedirs(self.target_name)
            self.generate_all()

    def new_dialog(self):
        """new sensor project"""   
        self.project_path = str(QFileDialog.getExistingDirectory(self, 
            "New Project", self.above_projecti))
        if self.project_path is not "":
            self.generate_all()

    def central_dialog(self):
        """main window UI"""
        icon_directory = self.projecti_parent+'icons/'

        self.statusBar()

        # --- Toolbar --- # 
        menubar = self.menuBar()

        menu_list = {'&File' : [{ "func_name" : "New..", 
            "icon" : icon_directory+'File.png', 
            "shortcut" : "Ctrl+N", "tip" : "Create New Project", 
            "conn" : self.new_dialog}, 
            { "func_name" : "Open..", 
            "icon" : icon_directory+'Folder.png', 
            "shortcut" : "Ctrl+O", "tip" : "Open File", 
            "conn" : self.open_dialog}],
            "&Help" : [{ "func_name" : "Update", 
            "icon" : icon_directory+'Up.png', 
            "shortcut" : "Ctrl+U", "tip" : "Update Software", 
            "conn" : self.open_dialog}] }

        for menu_item in menu_list:
            this_section = menubar.addMenu(menu_item)
            for this_action in menu_list[menu_item]:
                next_action = QAction(QIcon(this_action["icon"]), 
                    this_action["func_name"], self) 
                next_action.setShortcut(this_action["shortcut"])
                next_action.setStatusTip(this_action["tip"])
                next_action.triggered.connect(this_action["conn"])
                this_section.addAction(next_action) 

        self.setWindowTitle('Projecti')
        self.setWindowIcon(QIcon(
            icon_directory+'Tuneup-Utilities.png')) 
        # buttons

        grid = QGridLayout()  # layout for the central widget
        widget = QWidget(self)  # central widget
        widget.setLayout(grid)
        self.setCentralWidget(widget)

        new_button = QPushButton()
        new_button.setIconSize(QSize(150, 150))
        new_button.setIcon(QIcon(icon_directory+'File.png'))
        new_button.setStatusTip("New Project")
        #self.new_button.setDefault(True)

        project_button = QPushButton()
        project_button.setIcon(QIcon(icon_directory+'Folder.png'))
        project_button.setStatusTip("Turn File into project")  
        project_button.setIconSize(QSize(150, 150))

        # layout

        grid.addWidget(new_button, 0, 0, 10, 5)
        grid.addWidget(project_button, 0, 6, 10, 10)

        # connections
        self.connect(
            new_button, SIGNAL("clicked(bool)"), self.new_dialog)
        self.connect(project_button, SIGNAL("clicked(bool)"), 
            self.open_dialog)

def main():
    """Main function"""
    parser = argparse.ArgumentParser(
        description='given a string, produces a file structure of that name')
    parser.add_argument('-n', '--name', 
        help='New project with the argument as the name',
        required=False)
    parser.add_argument('-l', '--license', 
        help='''Add the name of the desired license agreement for this project. Default is LGPL v3. 
        Possible inputs are "LGPL v3", "LGPL v2", "GPL v2", "GPL v3", "MIT", "Apache v2", "Artistic License 2.0", ''', 
        action='store_const', 
        const="LGPL v3",
        required=False)
    data = parser.parse_args()

    app = QApplication(sys.argv)
    target = GenerateProject(data)
    target.show()
    app.exec_()

    #choose_a2d_chip()
    #choose_processor()
    #choose_regulator()

if __name__ == '__main__':
    main() 

def part_lists():
    atd_chip_list = ["Other1", "Other2", "Other3", "Other4", "Other", 
    "Other", "Other", "Other", "Other", "Other10", "Other", "MCP3412", "Other", 
    "Other", "Other", "Other", "Other", "Other", "Other", "Other", "Other", 
    "Other22", "Other", "MSP3024", "Other", "Other", "Other", "Other", "Other", 
    "Other30"]
    power_source_list = ["Regulator", "USB"]
    comms_chip_list = ["USB", "RS232"]
    regulator_chip_list = ["5v Regulator", "12v Regulator", "LTC4032V12"]
    processor_chip_list = ["PIC18f4525", "PIC16F84A"]

def read_units():
    return sensor_units

def write_units():
    """"""
    units = raw_input('Units: ')

def read_name():
    return sensor_name

def write_name():
    """"""
    name = raw_input('Sensor Name: ')
    
def read_input_value():
    return bit_reading

def read_resolution():
    print bit_resolution

def choose_chips():
    choose_a2d_chip()
    choose_processor()
    choose_regulator()
    
def choose_a2d_chip():
    part1 = "ADC_library/atod_"
    part2 = ".c"

    adc_string = part1+bit_resolution+part2
    adc_file = open(adc_string, r)
    adc_data = adc_file.readlines()
    adc_file.close()

    core = open("hardware_core.c", w)
    core.write(adc_data)
    core.close

    a2d_chip = atd_chip_list[bit_resolution]

def choose_processor():
    processor_chip = processor_chip_list[1]

def write_power_hardware():
    power_source = raw_input('Power Source: ')
    
def choose_regulator():
    regulator_chip = regulator_chip_list[3]

def read_hardware():
    print "Compiled on: " << __DATE__ << " " << __TIME__
    print "Author: Conor Forde"
    print "Power supply: "+power_source
    read_resolution()
    print " bit Analog to Digital converter: "+a2d_chip
    print "Required chip for "+comms_method+" : "+comms_chip 
    print "Processor: "+processor_chip
    print "Firmware number: "+firmware_number

def restore_settings():
    """restore factory settings"""
    print "factory settings restored"
    
def save_settings():
    """store settings to file"""
    print "settings saved"
    
def load_settings():
    """load settings from file"""
    print "settings loaded"

def encryption(data):
    """Encrypts given value"""
    return hashlib.sha224(data).hexdigest()

def login_input():
    """user login protocol"""
    ## First we check if the database exists.
    if path.isfile('database.db'):
        password_db = open('database.db', 'rb')
        password_data = pickle.load(password_db)
        password_db.close()
        ## If it doesn't, we will create one.
    else:
        ## First we create the desired variable.
        password_data = {encryption('admin') : encryption('admin'), 
            encryption('user') : encryption('password')}
        #needs user adjustment capibilities
        ## Then we open a filehandle to it.
        password_db = open('database.db', 'wb')
        ## And then we dump the variable into the filehandle.
        ## This will keep the variable intact between sessions,
        ## next time you start your script, the variable will look the same.
        pickle.dump(password_data, password_db)
        password_db.close()

    user = raw_input('Username: ')
    _pass = getpass.getpass('Password: ')

    if(encryption(user) in password_data 
        and password_data[encryption(user)] == encryption(_pass)):
        print 'Login sucessful. Welcome'
        return True
    else:
        print "Login failed. Access denied."
        return False

def login():
    """login overall process"""
    if login_input():
        return True
    else:
        print "Try again"
        if login_input():
            return True
        else:
            return False
