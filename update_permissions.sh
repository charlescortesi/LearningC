#!/bin/bash

# Script to fix permissions recursively in the current directory
echo "Fixing permissions recursively in: $(pwd)"

# Fix ownership - set current user as owner
sudo chown -R $USER:$USER .

# Fix directory permissions (read, write, execute for owner, read/execute for others)
find . -type d -exec chmod 755 {} \;

# Fix file permissions (read, write for owner, read for others)
find . -type f -exec chmod 644 {} \;

# Make shell scripts executable
find . -name "*.sh" -exec chmod +x {} \;

echo "Permissions updated successfully!"
