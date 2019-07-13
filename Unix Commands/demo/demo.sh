#!/bin/sh
echo "welcome to Shell Scripting language"
echo `date`
echo `pwd`
echo 'enter the name'
read name
echo The name is $name
echo enter the 1st number 
read a
echo enter the 2nd number 
read b
sum=$((a+b))
echo $sum
