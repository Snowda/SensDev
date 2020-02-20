import sys
from PyQt5.QtGui import *
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import QWidget
from PyQt5.QtGui import QPalette
from PyQt5.QtGui import QLinearGradient
from PyQt5.QtWidgets import QApplication

if __name__ == "__main__":
	app = QApplication([])

	w = QWidget()
	# w.setWindowFlags(Qt.FramelessWindowHint) 

	p = QPalette()
	gradient = QLinearGradient(0, 0, 0, 400)
	gradient.setColorAt(0.0, QColor(240, 240, 240))
	gradient.setColorAt(1.0, QColor(240, 160, 160))
	p.setBrush(QPalette.Window, QBrush(gradient))
	w.setPalette(p)

	w.show()
	app.exec_()