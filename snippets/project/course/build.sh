#!/bin/bash
rm -rf ./course_software
gcc main.c common.c course.c student.c query.c -o course_software
./course_software