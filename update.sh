#!/usr/bin/env bash
git add .
git commit -m "update $(date +%Y-%m-%d\ %H:%M)"
git push origin master