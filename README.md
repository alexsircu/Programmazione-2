| Comando                | Scopo                                         | Output                     |
| ---------------------- | --------------------------------------------- | -------------------------- |
| `make debug`           | Compila i moduli e genera `lib/libds_debug.a` | Libreria statica (debug)   |
| `make release`         | Compila ottimizzato, genera `lib/libds.a`     | Libreria (release)         |
| `make executables`     | Compila tutti i `.c` in `executables/`        | Eseguibili in `bin/debug/` |
| `make run NAME=<file>` | Compila + esegue un singolo programma         | `bin/debug/<file>`         |
| `make clean`           | Rimuove build, lib e bin                      | —                          |