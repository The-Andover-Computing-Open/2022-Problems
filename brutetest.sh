for((i = 1; ; ++i)); do
    echo $i
    ./data_generators/data_gen $i > int
    diff -w <(./author_solutions/exec < int) <(./tester_solutions/exec < int) || break
done