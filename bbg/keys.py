from evdev import InputDevice, categorize, ecodes
import tiny_screen

shift_on = False
ctrl_on = False
alt_on = False

def decode(keyevent):
    return keyevent.keycode[4]
    
    
def setup_keyboard():
    dev = InputDevice('/dev/input/event1')
    print(dev)

    for event in dev.read_loop():
        if event.type == ecodes.EV_KEY:
            print(categorize(event).keycode)
            tiny_screen.oled_putString(decode(categorize(event)))