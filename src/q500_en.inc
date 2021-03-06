resourcestring                                     {english}
  manual='Q500log2kml_en.pdf';
  {$IFDEF LINUX}
    DownURL='/downloads/q500log2kml_en.tar.gz';
  {$ELSE}
    {$IFDEF DARWIN}
      DownURL='/downloads/q500log2kml_MAC-english.zip';  {MAC OS X}
    {$ELSE}
      DownURL='/downloads/q500log2kml_en.zip';
    {$ENDIF}
  {$ENDIF}
  gmapURL='https://maps.google.com/maps';
  DefaultStatus='Select path to the whole FlightLog directory';
  nixda=' not found';
  rsGridCell1='Date';
  rsGridCell2='from';
  rsGridCell3='to';
  rsDauer='Duration';
  rsGridCell5='Ceiling';
  rsGridCell6='Distance';
  rsGridCell7='Length of trip';
  rsGridCell8='Top speed';
  rsGridCell9='Umax';
  rsGridCell10='Umin';

  rsHDcell0='Date/time';
  rsHDcell1='fsk_rssi';
  rsHDcell2='voltage';
  rsHDcell3='current';
  rsHDcell4='altitude';
  rsHDcell5='latitude';
  rsHDcell6='longitude';
  rsHDcell7='tas';
  rsHDcell8='gps_used';
  rsHDcell9='fix_type';
  rsHDcell10='satellites_num';
  rsHDcell11='roll';
  rsHDcell12='yaw';
  rsHDcell13='pitch';
  rsHDcell14='motor_status';
  rsHDcell15='?status 15';
  rsHDcell16='?status 16';
  rsHDcell17='f_mode';
  rsHDcell18='gps_pos_used';
  rsHDcell19='vehicle_type';
  rsHDcell20='error_flags';
  rsHDcell21='gps_accH';

  rsSave='Save';
  rsInvalid='invalid data';
  rsNoBild='Picture not allowed by system';
  rsNotRename='Rename not possible. Another application uses the directory or missing access rights';
  rsFLDir='Yuneec FlightLog directory';
  rsEmpty='is empty';
  rsHProfil='Elevation histogram from ';
  rsToGMaps='Show at GoogleMaps';
  rsToOSM='Show at OpenStreetMap';
  rsHDiaSave='Save as picture...';
  rsFileSave='Save as file...';
  rsToClipBoard='Copy to clipboard';
  rsSaved='saved';
  rsNotSaved='not saved';
  rsTurns=' Tracks';
  rsRG1Item0='Copter';
  rsPC1Tab1='Overview';
  rsPC1Tab2='Elevation histogram';
  rsPC1Tab3='Display files';
  rsPC1Tab4='Settings';
  capForm1='FlightLog evaluation for Yuneec copter';
  capLabel2='FlightLog:';
  capLabel3='Copter-ID:';
  capLabel13='Begin';
  capLabel14='End';
  hntEdit1='Enter name and/or serial number of the copter';
  capBitBtn1='&Close';
  hntBitBtn1='Close application';
  capBitBtn2='Con&vert';
  rsNoBreeze='Output format not available for Breeze';
  hntBitBtn2='Convert data and save it';
  capBitBtn3='&Archive';
  hntBitBtn3='Rename FlightLog directory in order to archive it';
  hntListBox1='Select track number/Doubleclick to renew list';
  hntColorBtn1='Select color of the flight track';
  capRadioGroup1='Source';
  hntRadiogroup1='Select data source';
  capRadioGroup2='Format';
  hntRadiogroup2='Output file format for convert';
  capTabSheet9='Data conversion';
  capGroupBox2='Flight track in KML/KMZ';
  capTabSheet12='Other settings';
  capColorButton1='Color';
  hntTrackBar1='Opacity of the flight track';
  capLabel1='Width flight track';
  hntLabel1='Set width of the flight track';
  capLabel4='Opacity';
  rsNoArch='Nothing there to archive';
  capCrossHairOn ='Cursor on';
  capCrossHairOff='Cursor off';
  hntCrossHair='Cursor for data analysis';
  capGoToZNr='Go to data point';
  capGoToVal='Go to value';
  capTabSheet10='Data analysis';
  capLabel5='Number data points for analysis';
  capLabel6='Dataset:';
  hntSpinEdit3='Start data point for analysis area';
  rsDescend='descend';
  rsAscend='ascend';
  rsSpeed='Speed';
  rsFor='for';
  rsGPSh='Altitude';
  capRadioGroup3='Speed in';
  capLabel7='Manual';
  rsSimulator='Simulator flight';
  rsBy='by';
  rsCreat='Created at';
  rsFlightReport='Flight report for';
  rsNoGPS='No GPS!';
  rsFlightNr='Flight number';
  rsStartpkt='Start position';
  rsEndPkt='Landing position';
  capMenuItem7='Go to error flags';
  capMenuItem8='Go to table';
  rsAnzahl='Count';
  rsStatistik='Statistics for';
  rsChart='Chart for';
  rsDescript='Description';
  capGroupBox1='Saved models ';
  hntMemo1='Enter all vehicles that send flight log data';
  capGroupBox5='Altitude mode';
  hntGroupBox5='Select altitude mode for output file';
  capDirSuffix='Path suffix';
  hntDirSuffix='Set format of path suffix for archiving';
  rsDistHome='Distance to home point';
  rsAllSet='All Set (Simulator)';
  rsAllOK='All OK';
  capLabel8='Download update';
  rsUndef='Undef';
  rsOpenWayP='Open waypoint file...';
  rsError='Error! Invalid or missing data/settings';
  rsCancel='&Cancel';
  hntCancel='Withdraw data';
  hntOK='Update waypoint';
  rsLat='Latitude';
  hntCoord='Coordinates in decimal degrees (DD)';
  rsLon='Longitude';
  capLabel12='Distance between waypoints';
  rsLandGear='Landing gear';
  rsAngle='Angle mode';
  rsSmart='Smart mode';
  rsManual='Manual mode';
  rsRTH='RTH';
  rsComing='go home';
  rsLanding='landing';
  rsMotorStarting='Motor starting';
  rsEmergency='Emergency, motors killed';
  rsInitializing='Initializing, Ready to fly';
  rsWaitRC='Waiting for RC';
  rsMagCali='Magnetometer';
  rsCali=' calibration';
  rsBinding='RC binding';
  rsAgility='Agility mode (Rate)';
  rsStability='Stability mode (Blue solid)';
  GPSlost=' - GPS lost';
  GPSoff=' - GPS off';
  rsNeutral='Center position (neutral)';
  capAnalyse='Quick analysis';
  capCheckBox3='All to Dashw';
  hntCheckBox3='Export all data to Dashware, not only from real flight';
  rsK1='K1 (camera pan)';
  rsK2='K2 (camera tilt)';
  rsFModeSw='Flight mode switch';
  capTopDia='Top histogram';
  capMiddleDia='Middle histogram';
  capBottomDia='Bottom histogram';
  hntGroupBox4='Select columns for histograms in ';
  capBitBtn12='Default';
  hntBitBtn12='Reset selected columns to default';
  rsCheckSettings='Check settings for ';
  rsScreenshot='&Screenshot';
  hntBitBtn13='Save screenshot from the application window as PNG...';
  capBitBtn14='Cut files';
  hntBitBtn14='Cut FlightLog data for better analysis (Ctrl+n)';
  rsStartTPunkt='Set start';
  rsEndTPunkt='Set end';
  rsResetCutBE='Reset start/end';
  capDatei='&File';
  capSelDir='Select FlightLog directory...';
  capSelProt='Select directory to scan...';
  capOpen='Open working directory...';
  capHelp='&Help';
  capInfo='About Q500log2kml';
  rsTimeout='Timeout! No WLAN connection to CGO3';
  rsCGO3URL='CGO3 default URL';
  hntCGO3URL='Enter CGO3 URL with trailing slash';
  hntStatus='CGO3 initializing and status query';
  hntWLAN='WLAN connection to CGO3 must be setted up and activated. Default password: 1234567890';
  hntGnou='Used memory space on SD-card in CGO3';
  capGnou='SD-Card used';
  hntStringGrid3='Query result CGO3';
  rsVideo='Video resolution';
  rsSharpness='JPG Sharpness';
  hntSharpness='Set sharpness for JPG pictures';
  rsWLANSpeed='WLAN speed';
  rsKStatus='Camera state';
  rsRecTime='Record time';
  hntCheckBox2='Show RTSP live stream';
  capCheckBox4='File list';
  hntCheckBox4='Show file list of SD card in CGO3 in browser';
  hntBitBtn16='Start video recording';
  hntBitBtn17='Stop video recording';
  capBitBtn19='Speed up';
  hntBitBtn19='Increase WLAN speed (56 MBit auto)';
  capBitBtn20='Reset speed';
  hntBitBtn20='Set WLAN speed to default (6MBit), recommended';
  capBitBtn22='Photo';
  hntBitBtn22='Take a photo';
  hntRec='Record state camera';
  hntSpeed6='Send test command to CGO3';
  hntEdit3='Enter test command body, example: SET_AUDIO_SW&mode=0';
  hntEdit4='Test result sent from CGO3';
  rsCGOstat='Status CGO3';
  capGroupBox7='Record video';
  capGroupBox9='Test';
  hntTabSheet11='CGO3 control and testing';
  rsMode='Mode';
  capBitBtn23='Set time';
  hntBitBtn23='Set the time in camera to now';
  rsFarbFormat='Color mode';
  rsShutter='Shutter time';
  rsExpo='Exposure';
  rsWB='White balance';
  capBitBtn18='Reset cam';
  hntBitBtn18='Reset camera to default values';
  capBitBtn24='Format SD';
  hntBitBtn24='Format SD-card. All files will be deleted!';
  rsISO='Sensitivity (ISO)';
  rsVdo='Video';
  capGroupBox10='Make flight record';
  hntGroupBox10='Scans a whole directory for telemetry files and creates flight record';
  capNachweis='Flight record';
  hntProgrBar1='Progress scanning...';
  rsProtSave='Save flight record...';
  rsGFtime='Total flight time';
  rsGFstr='Total distance';
  rsVType='Vehicle type';
  rsDateien='Files';
  rsSumme='Summary';
  hntRadioGroup8='Output format for flight record';
  capMI47='Open scanned directory...';
  hntTrackBar2='Delta for conversion of telemetry to CCC waypoints';
  rsNumWP=' CCC waypoints saved';
  capCheckBox6='Simulator';
  hntCheckBox6='Include simulator (UAV-Pilot) flight duration to total time';
  rsCGOwait='Waiting for CGO3. WLAN setup OK?';
  rsCGOdone='CGO3 connected with ';
  rsAvgSpeed='Avrg. speed';
  capCheckBox7='Ground station';
  hntCheckBox7='Add path of the RC (STxx) from RemoteGPS';
  hntStringGrid4='Show firmware versions found in Sensor files';
  rsKamera='Camera';
  rsGimbal='Gimbal';
  rsAutop='Autopilot';
  rsRealSense='RealSense';
  rsFind='Find';
  hntComboBox9='Enter search text. Search with F3';
  rsCopy='Copy';
  rsAdresse='Address';
  rsMissInet='Missing network connection';
  hntStatus1='Decoded values, state changes or error indication';
  rsRest='Remaining LiPo';
  rsPerCell='V per cell';
  hntDauer='Total duration of real flights';
  hntNumFlt='Number of real flights';
  hntStrecke='Estimated total flight distance';
  hntHGeschw='Average speed from total distance and total duration';
  hntGrid1='Show detailed window by double click on header';
  rsSelection='Selection';
  errSelection='No filter, invalid filter criteria';
  capScan='Scanning';
  hntScan='Recursive scan of a directory with many FlightLogs';
  rsNum='No ';
  rsResult='List of results';
  capProb='Problem case';
  hntProb='Recursive scan of a directory for known problem cases (not available for Breeze';
  capProbScan='Search problem case';
  rsSuspect=' matching FlightLog(s) found.';
  rsNoFound='Nothing found.';
  rsLenPL='Length Payload=';
  capCheckBox9='Purge H Plus';
  hntCheckBox9='Skip incorrect telemetry data from Typhoon H Plus';
  rsSportMode='Sport mode';
  rsSportSmartMode='Sport/Smart mode';
  capSensorPlus='Open PX4 Sensor file...';
  capDiashow='Show all profiles';
  rsProfile='Profile';
  rsUnknown='Unknown';
  hntBitBtn27='Save application log as text file';
  rsMAVlink='MAVlink';
  rsDS='records';
  rsFound='hits';
  rsRecordNo='Record number=';
  rsUp='up';
  rsDown='down';
  rsTeam='Panmode Team (Pancontrol by right stick)';
  rsWait='Please wait and be patient, this  takes time...';
  capCheckBox10='Flight path from PX4 sensor';
  hntCheckBox10='Create KML or GPX file from PX4 sensor files';
  rsAbsh=' at zero';
  hntCheckBox11='Flight path with vertical lines';
  capDel='Delete';
  hntDel='Delete AppLog without save';
  capCheckBox8='Sensor data PX4 as CSV file';
  hntCheckBox8='Some data values from PX4 Sensor files (from MAV messages) will be saved as CSV file.';
  csvTime='Time';
  csvSWload='SW load';
  csvVolt='voltage';
  csvAmp='current';
  csvAlt='altitude';
  csvLat='lat';
  csvLon='lon';
  csvCap='Batt remain';
  csvGPSfixT='GPS fix type';
  csvNumSats='Num sats';
  csvCOG='COG';
  csvIMUtemp='IMU temp';
  csvDropRate='Drop rate';
  csvSenHealth='Sensor health';
  csvGPSen='GPS enabled';
  csvCustMode='Custom mode';
  csvMAVstate='MAV state';
  csvMAVmode='MAV mode flag';
  csvMAVland='MAV landed state';
  csvVacc='V_Acc';
  csvHacc='H_Acc';
  csvHDOP='HDOP';
  csvVDOP='VDOP';
  csvHSpeed='hSpeed';
  csvTas='tas';
  csvRoll='roll';
  csvPitch='pitch';
  csvYaw='yaw';
  csvMsgID='MsgID';
  csvRSSI='rssi';
  rsTimeToBoot='Time since system boot';
  capReduced='Reduced';
  hntReduced='Reduced output to AppLog';
  rsNotUsed='not used';
  cbCapCaption='Remaining capacity instead voltage';
  cbCapHint='Show remaining battery capacity instead voltage at Elevation histogram';
  capThunder='H480 Thunderbird';
  hntThunder='FlightLog evaluation only for Thunderbird (H480 with customized PX4 firmware) -> reduced functionality';
  hntMAVmsg='Select MAVlink messages for evaluation. In doubt, select all by double click.';


