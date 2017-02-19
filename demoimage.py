from PIL import Image
import urllib2 as urllib

fd = urllib.urlopen("https://scontent.xx.fbcdn.net/v/t1.0-0/p480x480/15873132_648336938706443_5734806947978453551_n.jpg?oh=5916b6b25fa30079865688265d51a978&oe=58EA7B26");
im = Image.open(fd);

print im.size[1]
