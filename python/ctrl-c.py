import signal
import sys

# Define a function to handle the "Ctrl+C" keyboard interrupt
def signal_handler(sig, frame):
    print('You pressed Ctrl+C!')
    sys.exit(0)

# Register the signal handler function for the SIGINT signal
signal.signal(signal.SIGINT, signal_handler)

# Run your code here, such as an infinite loop or a long-running operation
while True:
    pass
