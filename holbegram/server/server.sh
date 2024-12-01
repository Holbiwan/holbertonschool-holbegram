#!/bin/bash

# Specify the port to be used
PORT=5000

# Terminate any process currently using the specified port
fuser -k 5000/tcp

# Navigate to the directory containing the web build files
cd build/web/

# Launch the HTTP server on the defined port
python3 -m http.server $PORT
