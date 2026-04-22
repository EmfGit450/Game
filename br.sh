#!/bin/bash
g++ main.cpp -o app -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
if [ $? -eq 0 ]; then
  echo -e "\e[32mBuild Successful!\e[0m"
else
  echo -e "\e[31mBuild Failed!\e[0m"
fi

./app