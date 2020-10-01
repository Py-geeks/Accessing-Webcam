# Accessing Webcam

import cv2
import numpy

cap = cv2.VideoCapture(0)  //cv2.VideoCapture(0) function helps us to accessing web-cam.

while(True):
    ret, cam = cap.read() //.read() function helps us to read the frames from web-cam

    cv2.imshow('video',cam) //cv2.imshow() function helps to show collected frames at terminal.It takes two args 1-'name of the file/folder' for prresentation,2-variale name at which frames are collected.

    if cv2.waitKey(1) == ord('q'): 
        break
    
print("Web-Cam Released")

cv2.destroyAllWindows()
cap.release()
