import webbrowser
import random
import time
while True:
    sites = random.choice(['google.com', 'youtube.com', 'amazon.in'])
    visit = "http://{}".format(sites)
    webbrowser.open(visit)
    seconds = random.randrange(0, 2)
    time.sleep(seconds)
