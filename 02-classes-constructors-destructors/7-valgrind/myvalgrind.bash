MAINEXECUTABLE=./$1
VALGRIND_FLAGS="-v --leak-check=full --show-leak-kinds=all  --error-exitcode=99"
echo "valgrind --tool=memcheck $VALGRIND_FLAGS $MAINEXECUTABLE 2>&1 | { egrep 'lost| at ' || true; }"
valgrind --tool=memcheck $VALGRIND_FLAGS $MAINEXECUTABLE 2>&1 | { egrep "lost| at " || true; }
