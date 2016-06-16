This examples shows how to use LTTng-UST in a project that uses
CMake as the build system generator.

Build the libraries and applications
=====

```bash
mkdir ../cmake-multi-shared-libraries.build
cd ../cmake-multi-shared-libraries.build
cmake ../cmake-multi-shared-libraries
make
```

3 shared libraries will be generated

```
libaligner-lib.so
libtester-lib.so
libtracepoint-provider.so
```


and 2 executables will be generated

```
aligner
tester
```



Trace the application tester
============================

The script trace.sh can be used.

```bash
lttng create
lttng enable-event -u 'gydle_om:*'
lttng start
./tester
lttng stop
lttng view > trace.txt
cat trace.txt
```

The content of trace.txt should be:

```
[11:36:37.629332381] (+?.?????????) Z1 gydle_om:alignQueryToTargetsTwoStrands_enter: { cpu_id = 3 }, { queryName = "molecule-foo" }
[11:36:37.629338710] (+0.000006329) Z1 gydle_om:alignQueryToTargetsTwoStrands_enter: { cpu_id = 3 }, { queryName = "molecule-bar" }
```
