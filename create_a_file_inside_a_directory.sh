#!/bin/bash
echo "Enter your directory name:"
read directory_name

mkdir $directory_name

read -p "This is an empty directory, would you like to create a file inside. Enter Yes or No: " dir
if [ "$dir" = "Yes" ]; then
	echo "You are about to create a file inside $directory_name. Enter the name of your file:"
	read file_name

	touch $file_name

	read -p "Would you like to write inside this file? Enter Y or N: " input
	if [ "$input" = "Y" ]; then
		read -p "Enter vi to use vi, enter emacs to use emacs: " editor
		if [ "$editor" = "vi" ]; then
			vi $file_name
			echo "$file_name saved successfully inside the $directory_name directory!"
		elif [ "$editor" = "emacs" ]; then
			emacs $file_name
			echo "$file_name saved successfully inside the $directory_name directory!"

		else 
			echo "wrong input 1"
		fi

	elif [ "$input" = "N" ]; then
		echo "$file_name successfully created inside $directory_name directory but EMPTY"

	else 
		echo "wrong input 2"

	fi
mv $file_name $directory_name

	

elif [ "$dir" = "No" ]; then
	echo "$directory_name directory is successfully created with no file inside"
else 
	echo "wrong input 3"

fi

chmod 777 *
