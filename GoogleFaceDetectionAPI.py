from googleapiclient import discovery
from oauth2client.client import GoogleCredentials
import base64
import argparse

def get_vison_service():
    credentials = GoogleCredentials.get_application_default()
    return discovery.build('vision','v1', credentials=credentials)

def detect_faces(face_file, max_results=4):
    image_content=face_file.read()
    batch_request = [{
    'image':{
            'content':base64.b64decode(image_content)
    },
    'features' : [{
        'type':'FACE_DETECTION',
        'maxResults': max_results,
    }]
    }]

    service = get_vison_service();
    request = service.images().annotate( body={'requests':batch_request,} )

    response = request.execute()
    print response

    return response['response'][0]['faceAnnotations']

def main(input_filename, max_results):
    with open(input_filename, 'rb') as image:
        faces = detect_faces(image, max_results)
        print('Found {} faces'.format(len(faces)))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description = "Python code to detect faces in an image")
    parser.add_argument('input_image', help="link to the image in your directory")
    parser.add_argument('max_results', default=4, help="Number of maximum results")
    args=parser.parse_args();

    main(args.input_image, args.max_results)
