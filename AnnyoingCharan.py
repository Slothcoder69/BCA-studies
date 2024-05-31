from flask import Flask, render_template_string
import random as rd
import pyttsx3
import os

app = Flask(__name__)

@app.route('/')
def index():
    random_number = rd.randint(1, 7)
    if random_number == 1:
        sentence = "You are my best friend!"
    elif random_number == 2:
        sentence = "NO, means no I don't like you Charan"
    elif random_number == 3:
        sentence = "Niddhi, chinna undi"
    elif random_number == 4:
        sentence = "I love you too Charan"
    elif random_number == 5:
        sentence = "Charan, I can't live without you"
    else:
        sentence = "I don't give a fuck about Charan"

    # Initialize text-to-speech engine
    friend = pyttsx3.init()
    voices = friend.getProperty('voices')
    if len(voices) > 1:
        friend.setProperty('voice', voices[1].id)  # Change the index as needed

    # Save the audio to a file
    audio_file = 'static/sentence.mp3'
    friend.save_to_file(sentence, audio_file)
    friend.runAndWait()

    return render_template_string("""
        <!doctype html>
        <html lang="en">
          <head>
            <meta charset="utf-8">
            <title>Random Sentence</title>
          </head>
          <body>
            <h1>{{ sentence }}</h1>
            <audio controls>
              <source src="{{ url_for('static', filename='sentence.mp3') }}" type="audio/mpeg">
              Your browser does not support the audio element.
            </audio>
          </body>
        </html>
    """, sentence=sentence)

if __name__ == '__main__':
    if not os.path.exists('static'):
        os.makedirs('static')
    app.run(debug=True)
