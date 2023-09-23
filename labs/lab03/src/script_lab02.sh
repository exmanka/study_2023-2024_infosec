#!/bin/bash

echo "Starting makim's script for checking file usability:"

read -p "Enter file1 chmod current numeric code: " file1num
echo "======================================"
echo "1. Trying to create file..."
(umask 777; touch /home/guest/dir1/file_temp1)
echo "======================================"
echo "2. Trying to remove file..."
rm -r /home/guest/dir1/file_temp1
echo "======================================"
echo "3. Trying to write to file..."
echo "test" > /home/guest/dir1/file1
echo "======================================"
echo "4. Trying to read file..."
cat /home/guest/dir1/file1
echo "======================================"
echo "5. Trying to change directory..."
cd /home/guest/dir1
echo "======================================"
echo "6. Trying to view files in direcotry..."
ls -l /home/guest/dir1
echo "======================================"
echo "7. Trying to rename file..."
(umask 777; mv /home/guest/dir1/file1 /home/guest/dir1/file_temp2)
(umask 777; mv /home/guest/dir1/file_temp2 /home/guest/dir1/file1)
echo "======================================"
echo "8. Trying to change attributes..."
chmod $file1num /home/guest/dir1/file1
echo "======================================"
