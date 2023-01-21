#!/bin/bash

CONFIG_FILE=kernel/configs/android-recommended-arm64.config
# download_googlesource: Download a text file from android.googlesource.com and append to a file
# param 1: The absolute https:// link
# param 2: Destination file
function download_googlesource() {
	curl $1?format=TEXT | base64 --decode >> $2
}
rm -f $CONFIG_FILE
download_googlesource https://android.googlesource.com/kernel/configs/+/refs/heads/master/q/android-4.14/android-base.config $CONFIG_FILE
download_googlesource https://android.googlesource.com/kernel/configs/+/refs/heads/master/q/android-4.14/android-recommended-arm64.config $CONFIG_FILE
download_googlesource https://android.googlesource.com/kernel/configs/+/refs/heads/master/q/android-4.14/android-recommended.config $CONFIG_FILE
