
-----README pDM version 1.8.1-------

pDM is a MIDI score player that is using the KTH rule system for control of the musical expressivity. pDM is an abstraction (patch) in pd and has been tested using Pd version 0.38.4-extended-RC8 on Windows. No other libraries are used. It should work on Linux and Mac using the same pd-extended version but this is not thoroughly tested. It is released under GPL license, see included license file.
 
The principles and ideas behind the program is described in the papers
 
Friberg, A. (2006). pDM: an expressive sequencer with real-time control of the KTH music performance rules. Computer Music Journal, 30(1), 37-48.

Friberg, A. (2005). Home conducting – Control the overall musical expression with gestures. Proceedings of the 2005 International Computer Music Conference, San Francisco: International Computer Music Association. (pp. 479-482). http://www.speech.kth.se/prod/publications/files/1347.pdf

The melody lead rule was implemented by Johan Bjurling and is described in

Bjurling, J.(2007). Timing in Piano Music - A Model of Melody Lead. Master Thesis at Speech, Music and Hearing, KTH, Stockholm. http://www.speech.kth.se/publications/masterprojects/

----Installation-----------

Download and install pd-extended for your platform from http://puredata.info/downloads
Make sure to follow the instructions for the installation. For example, for Windows there is one file to execute after the installation.

----Getting started-------

Run the file pDM-181.pd (on Windows double-click it)
Load a score file by clicking the "Open.." button. It should be a file with the ".pdm" extension found in the "pdm_scores" directory. 
When the music is played there are several interaction windows that can be used (see comments in program). 
If there is no sound - check that MIDI out is connected to your synthesizer (menu Media/Midi settings...).

-- Gesture interface in EyesWeb-----

For using gestural control you need a web cam and the program EyesWeb that is free for download at www.eyesweb.org. Eyesweb is only running in Windows. Download and install EyesWeb 3.3.0 including all updates and the motion library. Then it is only to load and run the file "home_conductor_simple2D_light.eyw". The two programs will automatically connect and your Home conducting can start!.

There is a minimum amount of movement neccessary for the score to start playing and continue. The gesture interface is connected to the emotional activity-valence space so that a lot of movement gives high activity, movements in the bottom of the screen low valence (sadness and anger), and movements in the top of the screen high valence (happiness and tenderness)

-- Creating new scores ---

The score files have to be preprocessed in Director Musices (DM) by saving it in the ".pdm" format. Thus, you need to download Director Musices at http://www.speech.kth.se/music/performance/
A MIDI file can be used directly but a version with few performance variations is preferred. In order for the phrasing to work you need to insert phrase marks manually in the score (Instructions in the DM manual).

--------

Please send any comments and questions to 
Anders Friberg
afriberg@csc.kth.se
http://www.speech.kth.se/staff/homepage/index.html?id=afriberg

For more info about the rule system see:
http://www.speech.kth.se/music/performance/


------------Changes in version 1.8.1 -----------------------
-New rule for melody lead modelled after measurements from real pianos.
-Added scaling of tempo and sound level for the 2D control panels
-Some cosmetic changes and patch cleaning
-Removed the send variables connecting software synthesizers in pd.