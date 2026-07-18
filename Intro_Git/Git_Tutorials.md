# testing_git_and_github_for_1sttime
Just a basic things as i am starting to work with git and git hub as an electronics engineering
Step 1: Create a GitHub account (if you don't have one)

Go to github.com and create an account.

Step 2: Create a new repository

On GitHub:

Click New Repository.
Give it a name (for example, Arduino-Projects).
Choose Public or Private.
Do not initialize it with a README if your project already exists locally.
Click Create repository.

GitHub will then show you commands you'll use later.

Step 3: Open your Arduino project in VS Code

Open VS Code.

Click File → Open Folder
Select your Arduino project folder.

For example:

Arduino Project/
│── Blink/
│   ├── Blink.ino
│── Sensor/
│   ├── Sensor.ino
│── README.md
Step 4: Open the Terminal

In VS Code:

Terminal → New Terminal

or press

Ctrl + `

Make sure the terminal is inside your project folder.

Step 5: Initialize Git

Run:

git init

This tells Git:

"Start tracking changes in this folder."

You'll see something like:

Initialized empty Git repository
Step 6: Check the status
git status

It will show files in red because they are not yet tracked.

Example:

Untracked files:
 Blink.ino
 Sensor.ino
Step 7: Add the files

To add everything:

git add .

The . means:

Add all files in this folder.

Step 8: Commit the files

A commit is like taking a snapshot of your project.

git commit -m "Initial Arduino project"

Example output:

3 files changed
create mode 100644 Blink.ino
Step 9: Connect your local folder to GitHub

Copy the repository URL from GitHub.

It looks like:

https://github.com/yourusername/Arduino-Projects.git

Now run:

git remote add origin https://github.com/yourusername/Arduino-Projects.git

Verify:

git remote -v
Step 10: Rename the default branch
git branch -M main
Step 11: Upload (Push)
git push -u origin main

The first time, GitHub may ask you to authenticate. You can sign in through your browser or use a personal access token if prompted.

After the upload completes, refresh your GitHub repository page—you should see all your Arduino files.

Making changes later

Whenever you modify your Arduino code:

Check changes
git status
Add changes
git add .
Commit
git commit -m "Updated sensor calibration"
Push
git push

That's the typical Git workflow:

Edit files
     ↓
git status
     ↓
git add .
     ↓
git commit -m "message"
     ↓
git push
Using the VS Code Source Control UI (No Terminal)

VS Code also provides a graphical interface:

Click the Source Control icon (the branch icon) on the left.
Click Initialize Repository if prompted.
Stage changes by clicking the + next to files.
Enter a commit message and click Commit.
Click Publish Branch or Sync Changes.
Sign in to GitHub if prompted.

This is often easier for beginners because you can see which files have changed without remembering commands.

Recommended .gitignore for Arduino projects

Create a file named .gitignore in the project root with the following contents:

.vscode/
build/
*.tmp
*.bak

This helps prevent editor settings and temporary build files from being tracked.

Git concepts to remember:
Git command	What it does
git init	Starts Git in a folder
git status	Shows changed or untracked files
git add .	Stages all changes
git commit -m "message"	Saves a snapshot of the staged changes
git push	Uploads commits to GitHub
git pull	Downloads the latest changes from GitHub
