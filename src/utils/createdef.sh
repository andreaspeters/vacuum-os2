#!/usr/bin

#Ziel DEF Datei
TARGET=$1

#Alle obj Dateien
FILES=`ls *.obj`

rm ${TARGET}.def

for i in ${FILES}
do
  if [ -f "${TARGET}.def" ];
  then
    NUMBER=`tail -n 2 ${TARGET}.def | awk -F" " '{ print $2; }' | sed -e s/@//g`
    NEXTNUMBER=`echo ${NUMBER}+1 | bc`
  else 
    echo "LIBRARY ${TARGET} INITINSTANCE TERMINSTANCE" > ${TARGET}.def
	echo "DESCRIPTION '@#unknown:0.0#@##1##  9 Jan 2011 11:27:47    ::::::@@'" >> ${TARGET}.def
	echo "EXPORTS"  >> ${TARGET}.def
  fi
  emxexp -o${NEXTNUMBER} $i >> ${TARGET}.def  
  echo "  emxexp -o${NEXTNUMBER} $i >> ${TARGET}.def  "
done




