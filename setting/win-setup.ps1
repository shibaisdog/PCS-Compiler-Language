cd ../
write-host "-----------TRY COPYING SYNTAXES-----------"
write-host "USERNAME : $((Get-LocalUser)[((Get-LocalUser).count)-1])"
write-host "'./tmp/pcs.vscode' to 'C:\\Users\\$((Get-LocalUser)[((Get-LocalUser).count)-1])\\.vscode\\extensions'"
Copy "./tmp/pcs.vscode" "C:\\Users\\$((Get-LocalUser)[((Get-LocalUser).count)-1])\\.vscode\\extensions" -Force -Recurse -PassThru
Pause