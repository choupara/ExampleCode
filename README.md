Downloaded genome sequence from NCBI

taxonomic name: Rotavirus

https://www.ncbi.nlm.nih.gov/datasets/genome/?taxon=10912


Install blast 
#sudo apt install ncbi-blast+

Compare genome sequence
Take help from
https://www.biostars.org/p/330370/#330438

Command
#blastn -query "query.fna" -subject "$filename" -task "blastn" -outfmt 6

Script for comparing multiple sequence

compare_fna.sh







