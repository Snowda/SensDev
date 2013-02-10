/* 
 * File:   main.cpp
 * Author: Conor
 *
 * Created on 03 February 2013, 21:36
 */
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <cstring>

using std::string;
using std::stringstream;
using namespace std;
        
//////core.h

string atd_chip_list[] = { "Other1", "Other2", "Other3", "Other4", "Other", 
    "Other", "Other", "Other", "Other", "Other10", "Other", "MCP3412", "Other", 
    "Other", "Other", "Other", "Other", "Other", "Other", "Other", "Other", 
    "Other22", "Other", "MSP3024", "Other", "Other", "Other", "Other", "Other", 
    "Other30" };
string power_source_list[] = { "Regulator", "USB" };
string comms_chip_list[] = { "USB", "RS232" };
string regulator_chip_list[] = { "5v Regulator", "12v Regulator", "LTC4032V12"};
string processor_chip_list[] = { "PIC18f4525", "PIC16F84A" };
    
int code_version_major = 0;
int code_version_minor = 0;
int code_version_revision = 1;

class sensor {
public:
    sensor();
    sensor(const sensor& orig);
    virtual ~sensor();
    //virtual ~linearise();
    void cal_span(void);
    double cal_zero(void);
    double apply_calibration(void);
    string read_units(void);
    void write_units(void);
    string read_name(void);
    void write_name(void);
    double read_input_value(void);
    void read_resolution(void);
    void read_hardware(void);
    void return_alarm_levels(void);
    void apply_filter(void);
    void damp(void);
    void autocalibrate(void);
    void simulate(void);
    void restore_past_setting(void);
    void diagnostics(void);
    void read_settings(void);
    void store_settings(void);
    void write_comms_hardware(void);
    void write_resolution(unsigned int value);
    void write_power_hardware(void);
    void choose_a2d_chip(void);
    void choose_processor(void);
    void choose_regulator(void);
    void choose_chips(void);
    
private:
    double measurement;
    double bit_reading;
    double span;
    double zero;
    static const unsigned int number_of_alarms = 3;
    double alarm[number_of_alarms];
    string alarm_name[number_of_alarms];
    double limit;
    double filter;
    double damping_time;
    static const unsigned int quadratic_position = 6; //const
    double linear[quadratic_position];
    
    unsigned int bit_resolution; //const
    string sensor_units;
    string sensor_name;
    const string sensor_type;
    string firmware_number;
    string processor_chip;
    string comms_method;
    string a2d_chip;
    string regulator_chip;
    string comms_chip;
    string power_source;
};
class oxygen_sensor : public sensor{
public:
    //double linearise(void);
private:
    double bit_reading;
    //unsigned int quadratic_position;
    //double linear[quadratic_position];
};
class pressure_sensor : public sensor{
public:
    
private:
    
};
class nitrogen_sensor : public sensor{
public:
private:
    
};
class temperature_sensor : public sensor{
public:
private:
    
};
class light_sensor : public sensor{
public:
private:
    
};
class input {
    
public:
private:
    input();
    virtual ~input();
};

void printHelp(void){
    cout << "you need help";
}
void printVersion(void){
    cout << "SensDev Version v-" << code_version_major << "." 
            << code_version_minor << "." << code_version_revision << "\n";
}

void merge_f2f(const char* file_to_open, const char* file_to_append_to){
    ifstream atd_in;
    ofstream atd_out;
    atd_in.open(file_to_open);   // open input file
    atd_out.open(file_to_append_to); // open output file
    int length;
    char * atd_buffer;
    
    if (atd_in.is_open()){
        atd_in.seekg(0, std::ios::end);     // go to the end
        length = atd_in.tellg();            // report location (this is the length)
        atd_in.seekg(0, std::ios::beg);     // go back to the beginning
    
        length = length - 18;              /* a complete hack to prevent a repeat 
                                           output of last 18 characters. 
                                           find out why.*/
    
        atd_buffer = new char [length];     // allocate memory for a buffer of appropriate dimension
        atd_in.read(atd_buffer, length);    // read the whole file into the buffer
        atd_out.write(atd_buffer, length);
    
        atd_in.close();                     // close file handle
        atd_out.close();
    
        delete[] atd_buffer;
    } else {
        cout << "Unable to code library for analog to digital converter.\n"; 
    }
}

/////core.cpp

class sensor;
sensor::sensor() {

}
sensor::sensor(const sensor& orig) {

}
sensor::~sensor() {
    
}
void sensor::cal_span(){
    
}
double sensor::cal_zero(){
    zero = zero;
    return zero;
}
double sensor::apply_calibration(){
    measurement = (measurement * span) + zero;
    return measurement;
}
string sensor::read_units(){
    return sensor_units;
}
void sensor::write_units(){
    
}
string sensor::read_name(){
    return sensor_name;
} 
void sensor::write_name(){
    
}
double sensor::read_input_value(){
    return bit_reading;
}  
void sensor::read_resolution(){
    cout << bit_resolution;
}
void sensor::choose_chips(){
    choose_a2d_chip();
    choose_processor();
    choose_regulator();
    
}
void sensor::choose_a2d_chip(){
    const char * adc_file;
    string adc_string;
    string part1 = "ADC_library/atod_";
    string part2 = ".c";
    stringstream concat;
               
    concat << part1 << bit_resolution << part2;
    adc_string = concat.str();
    adc_file = adc_string.c_str();
    merge_f2f(adc_file, "hardware_core.c");
    
    a2d_chip = atd_chip_list[bit_resolution];
}
void sensor::choose_processor(){
    processor_chip = processor_chip_list[1];
}
void sensor::write_power_hardware(){
    cin >> power_source;
    
}
void sensor::choose_regulator(){
    regulator_chip = regulator_chip_list[3];
}

void sensor::read_hardware(){
    std::cout << "Compiled on: " << __DATE__ << " " << __TIME__ << "\n";
    std::cout << "Author: Conor Forde \n";
    std::cout << "Power supply: " << power_source << "\n";
    read_resolution();
    std::cout << " bit Analog to Digital converter: " << a2d_chip << "\n";
    std::cout << "Required chip for " << comms_method << ": " << comms_chip << "\n";
    std::cout << "Processor: " << processor_chip << "\n";
    std::cout << "Firmware number: " << firmware_number << "\n";
    
}
void sensor::return_alarm_levels(){
    unsigned int i;
    static unsigned int number_of_alarms = 10;
    double alarm_name[number_of_alarms];
    
    for(i = number_of_alarms; i <= 0, i--;){
        std::cout << alarm_name[i];
    }
}
void sensor::apply_filter(){
    
}
void sensor::damp(){
    
}
void sensor::autocalibrate(){
    
}
void sensor::simulate(){
    
}
void sensor::restore_past_setting(){
    
}
void sensor::diagnostics(){
    
}
void sensor::read_settings(){
    
}
void sensor::store_settings(){
    
}
void sensor::write_comms_hardware(){
    cin >> comms_method;
}
void sensor::write_resolution(unsigned int value){
    bit_resolution = value;
}

/*
double oxygen_sensor::linearise(){
        double fin;
        double expo0,expo1,expo2,expo3,expo4,lin;
        double linear[6];
        
        linear[0] = 0;
        linear[1] = 1.32009562834126;
        linear[2] = 1.32009562834126;
        linear[3] = 0.00105981735120507;
        linear[4] = 4.74029270604665E-07;
        linear[5] = 1.12122652687617E-10;
        linear[6] = 1.10355997212904E-14;
        
        expo4 = pow( bit_reading, 2);
        expo3 = pow( bit_reading, 3);
        expo2 = pow( bit_reading, 4);
        expo1 = pow( bit_reading, 5);
	expo0 = pow( bit_reading, 6);
        
        fin = -1.75754621485155E-14*expo2 + 2.30674940285604E-10*expo3 - 
                9.54208136310639E-07*expo4 + 0.00426792053829504*bit_reading - 
                4.78582460113954;


        
        fin = linear[6]*expo0 - linear[5]*expo1 + linear[4]*expo2 - 
                linear[3]*expo3 + linear[2]*expo4 - linear[1]*bit_reading + 
                linear[0];

    return fin;
}

 */

//////main.cpp
/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    int quiet = 0;  /* Value for the "-q" optional argument. */

    for (i = 1; i < argc; i++)  /* Skip argv[0] (program name). */
    {
        /*
         * Use the 'strcmp' function to compare the argv values
         * to a string of your choice (here, it's the optional
         * argument "-q").  When strcmp returns 0, it means that the
         * two strings are identical.
         */

        if (strcmp(argv[i], "-q") == 0){
            quiet = 1;  /* This is used as a boolean value. */
        } else {
            /* Process non-optional arguments here. */
        }
        if ((strcmp(argv[i], "-help") == 0) || (strcmp(argv[i], "-h") == 0) 
                || (strcmp(argv[i], "-?") == 0)){
                printHelp();
                exit(EXIT_SUCCESS);
        }
        if ((strcmp(argv[i], "-v") == 0) || (strcmp(argv[i], "-version") == 0)){
            printVersion();
            exit(EXIT_SUCCESS);
        }
        
        if (strcmp(argv[i], "-d") == 0){
            quiet = 1;  /* This is used as a boolean value. */
        } else {
            /* Process non-optional arguments here. */
        }
    }
    
    sensor sensor1;
    double max_val, min_val, bit_resolution;
    double increments, bit_calc;
    int safe_bits, no_of_bits;
    
    cout << "Please enter desired maximum range: \n";
    cin >> max_val;
    cout << max_val << "\n";
    cout << "Please enter desired minimum range: \n";
    cin >> min_val;
    cout << min_val << "\n";
    cout << "Please enter desired resolution: \n";
    cin >> bit_resolution;
    cout << bit_resolution << "\n";
    //calculate required bits
    increments = (max_val - min_val)/bit_resolution;
    bit_calc = log(increments)/log(2);
    
    no_of_bits = bit_calc + 0.5;
    safe_bits = no_of_bits + 1;
    sensor1.write_resolution(safe_bits);
    
    cout << "What power source do you want to use? \n";
    cout << "1. USB \n";
    cout << "2. Mains \n";
    cout << "3. Inductive Charging \n";
    cout << "4. Battery \n";
    cout << "5. 24 Volt \n";
    cout << "6. 12 Volt \n";
    //%i [Vv]olt"
    sensor1.write_power_hardware();
    
    cout << "What Protocol do you want to use to communicate? \n";
    cout << "1. 4-20mA \n";
    cout << "2. RS232 \n";
    cout << "3. USB \n";
    cout << "4. Bluetooth \n";
    cout << "5. WiFi \n";
    //"multiple"?
    sensor1.write_comms_hardware();
    
    //cout << "What processor technology do you wish to use? \n";
    //cin >> processor;
    
    cout << "\n\n";

    sensor1.choose_chips();
    sensor1.read_hardware();
    
    // produce relevant code for communication protocol
    // give code relevant information for future lookup
    //output parts list, datasheets and purchase links
    
    return 0;
}