import speech_recognition as sr

r=sr.Recognizer()

with sr.Microphone() as source:
    print 'Say Something'
    audio=r.listen(source)

try:
    print ('You said : '+r.recognize_google(audio))


except sr.UnknownValueError:
    print("UnknownValueError");
except sr.RequestError:
    print ("RequestError");
