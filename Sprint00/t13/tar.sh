if [[ $1 == "-c"  ]]
then 
  tar -zcvf $2 $@
elif [[ $1 == "-e" ]]
then
  tar -xvf $2
fi
