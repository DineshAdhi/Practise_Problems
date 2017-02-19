import base64
import json
from googleapiclient import discovery
from oauth2client.client import GoogleCredentials
import time
import httplib2
import argparse
import speech_recognition as sr

def get_speech_service():
    credentials=GoogleCredentials.get_application_default().create_scoped(
        ['https://www.googleapis.com/auth/cloud-platform'])
    http=httplib2.Http();
    credentials.authorize(http)

    return discovery('speech','v1beta1',http=http)


def main(speech_file):
    with open(speech_file,'rb') as speech:
        speech_content=base64.b64encode(speech.read())


    service=get_speech_service();
    service_request=service.speech.asyncrecognize(
        body={
            'config':{
                'encoding':'LINEAR16',
                'sampleRate':16000,
                'languageCode':'en-US',
            },
            'audio':{
                'content':speech_content.decode('UTF-8')
            }
    })

    respose=service_request.execute()
    print(json.dumps(response))

    name=respose['name']

    service_request=service.operations().get(name=name)

    while True:
        print("Watching for server processing")
        sleep(1)

        response=service_request.execute()

        if 'done' in response and response['done']:
            break;

        print(json.dumps(respose['respose']['results']))

if __name__=='__main__':
    parser=argparse.ArgumentParser();
    parser.add_argument('speech_file',help='/home/dinesh10c04/Desktop/Jsjss.wav')
    args=parser.parse_args()
    main(args.speech_file)
