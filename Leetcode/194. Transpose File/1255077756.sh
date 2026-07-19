awk '{ for (i=1; i<=NF; i++) a[i,NR]=$i } NF>p { p=NF } END { for(j=1; j<=p; j++) { for(i=1; i<=NR; i++) printf "%s%s", a[j,i], (i==NR ? RS : FS) } }' file.txt
