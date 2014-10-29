from flask import Flask, jsonify, request, json
from codeexecutor import execute

app = Flask(__name__)


@app.route('/health', methods=['GET'])
def get_health():
    print(request.data)
    return jsonify({'response':'PONG'})

@app.route('/level/<levelid>/submit', methods=['POST'])
def run_code(levelid):
    print('received request to run level: '+levelid)
    try:
        loadedjson = json.loads(request.form['jsondata'])
        print("Codelines: " + '\n'.join(loadedjson['codelines']))
        #print("Context: " + loadedjson['context'])
    except Exception as e:
        print e

    code = '\n'.join(loadedjson['codelines'])
    context = loadedjson['context']
    status = execute(code, context)

    if status:
        return jsonify({'response':'Ran code'})
    else:
        return jsonify({'response':'Error running code'})

@app.route('/initialize', methods=[POST])
def init_engine():
    # Create game engine instance from the game library
    # And create initial context only containing a copy
    # Of the world and hero fascade objects
    pass

# Run
if __name__ == '__main__':
    app.run(
        host = "0.0.0.0",
        port = 5000
    )
