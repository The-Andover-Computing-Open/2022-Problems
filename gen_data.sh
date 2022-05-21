g++ -o data_generators/data_gen data_generators/data_gen_${1}.cpp
mkdir ./data/${1}


for((i = 2; i<50; ++i)); do
    echo $i
    ./data_generators/data_gen $i > ./data/${1}/$i.txt
done

cd data/${1}
zip ${1}.zip *.txt

