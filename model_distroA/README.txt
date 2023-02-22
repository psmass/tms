Welcome to your first Connext DDS example!

This Python example was generated using the data type DeviceInfo
from tmsExampleApp.idl.

This example has one application (tmsExampleApp_program.py)
which can run a publisher example (tmsExampleApp_publisher.py)
or a subscriber example (tmsExampleApp_subscriber.py).


To Modify the Data:
===================

To modify the data being sent edit the tmsExampleApp_publisher.py
file where it says

# Modify the data to be sent here


To Run this Example (command line)
==================================

Run the subscriber on one command prompt:

$ python tmsExampleApp_program.py --sub 
or
$ python tmsExampleApp_subscriber.py

Run the publisher on a different command prompt:

$ python tmsExampleApp_program.py --pub
or
$ python tmsExampleApp_publisher.py

You can pass additional arguments. To see the full list:

$ python tmsExampleApp_program.py --help

For example, to publish 10 data samples on domain 100, run the following:

$ python tmsExampleApp_program.py --pub --domain 100 --sample-count 10



