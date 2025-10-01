#!/bin/bash

# 🚀 GitHub Auto-Setup Script for WSL
# Usage: ./script.sh <repo-name>
# Example: ./script.sh test

EMAIL="brahimouhammou2022@gmail.com"
USERNAME="Ouhammou1"
REPO=$1

if [ -z "$REPO" ]; then
  echo "❌ Usage: ./script.sh <repo-name>"
  exit 1
fi

echo "🔑 Generating SSH key for $EMAIL ..."
if [ ! -f ~/.ssh/id_ed25519 ]; then
  ssh-keygen -t ed25519 -C "$EMAIL" -f ~/.ssh/id_ed25519 -N ""
else
  echo "✅ SSH key already exists, skipping generation."
fi

echo "⚡ Starting SSH agent..."
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

echo "📋 Here is your public key, copy it and add it to GitHub → Settings → SSH and GPG keys:"
cat ~/.ssh/id_ed25519.pub

echo "⏳ Waiting for you to add the key to GitHub..."
read -p "👉 Press Enter after adding the SSH key to GitHub..."

echo "🔗 Setting remote URL to SSH..."
git remote set-url origin git@github.com:$USERNAME/$REPO.git

echo "🔍 Testing SSH connection..."
ssh -T git@github.com

echo "🚀 Pushing code to GitHub..."
git push -u origin main

echo "✅ Done! Your project is now on GitHub: https://github.com/$USERNAME/$REPO"

