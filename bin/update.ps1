git add .
$commitMessage = "updated on $(Get-Date -Format 'yyyy-MM-dd HH:mm')"
git commit -m "$commitMessage"
git push origin master