import speech_recognition as sr
import os
from wit import Wit

client = Wit(access_token = "PRAD2LHDBGWGT3ELPIVDDJDBADXUQX7L", actions=actions)

r

r=sr.Recognizer()

while True:
    with sr.Microphone() as source:
        print('say something')
        audio = r.listen(source)

        try:
            text = r.recognize_google(audio)
            print("You said :" +text )
        except sr.UnknownValueError:
            print("Google didn't understand what you just said")
        except sr.RequestError as e:
            print("Could not request results from Google Speech Recognition service; {0}".format(e))

        os.system('say '+text)
