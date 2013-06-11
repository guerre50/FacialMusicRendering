Facial Music Rendering
=======

Final project for course [DT2300 - Sound in Interaction](http://www.csc.kth.se/utbildning/kth/kurser/DT2300/)  KTH, Stockholm


### Description:
Using Kinect's facial recognition API we send its values to pd and there, we process and map them to different parameters: pitch and volume and emotion of the played song using pDM patch. <br>
You will find the available values as well as its meaning in `pd/kFaceInterface.pd`

![Facial parameters](https://dl.dropboxusercontent.com/u/5476179/kFace.png)


#### This project contains work of:

* **pDM** emotion rendering patch for pd by [The Department of Speech, Music and Hearing](http://www.speech.kth.se/) at KTH, Stockholm 
* **OscPkt** minimalistic OSC library by [Julien Pommier](http://gruntthepeon.free.fr/oscpkt/)
