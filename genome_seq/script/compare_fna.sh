tstamp=`date '+%Y_%m_%d_%H_%M_%S'`

log_file="../log/log_${tstamp}"
query_file="../data/query.fna"

for filename in ../data/GCA_002661135.1_ASM*; do
	blastn -query "$query_file" -subject "$filename" -task "blastn" -outfmt 6 | awk '{print $1,$2,$3}'|uniq >> $log_file 2>&1
done


