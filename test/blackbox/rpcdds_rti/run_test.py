#!/usr/bin/python3

import os
from subprocess import call

def getoptions():
    project_source_dir = os.environ["PROJECT_SOURCE_DIR"]

def generate_code():
    call(["sh", project_source_dir + "/fastrtpsgen/scripts/rpcddsgen", "-help"])

if __name__ == "__main__":
    getoptions()
    generate_code()
