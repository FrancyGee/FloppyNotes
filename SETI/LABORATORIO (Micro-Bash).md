
### Structs

- `command_t`: contiene tutti gli elementi di un comando
	- `n_args` numero argomenti
	- `args`  argomenti
	- `out_pathname`  path per > (0 se non c'e nessun >)
	- `in_pathname`  path per < (0 se non c'e nessun <)


- `line_t`: rappresenta la stringa che passi alla shell
	- `n_commands` numero di comandi
	- `commands`  numero di comandi nella stringa.

- `check_t` valori degli errori
	- `CHECK_OK` rappresenta il nessun errore
	- `CKECK_FAILED` rappresenta un errore

### Functions

