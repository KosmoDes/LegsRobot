import serial


def turn_right():
    with serial.Serial('/dev/ttyUSB', 9600, timeout=1) as ser:
        print(ser.name)
        ser.write(b'right')


def turn_left():
    with serial.Serial('/dev/ttyUSB', 9600, timeout=1) as ser:
        print(ser.name)
        ser.write(b'left')


def turn_forward():
    with serial.Serial('/dev/ttyUSB', 9600, timeout=1) as ser:
        print(ser.name)
        ser.write(b'forward')


def turn_back():
    with serial.Serial('/dev/ttyUSB', 9600, timeout=1) as ser:
        print(ser.name)
        ser.write(b'back')
