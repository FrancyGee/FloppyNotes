
**Http (Hypertext Transfer Protocol)** è un protocollo a livello Applicativo per trasferire documenti ipermedia come html con un modello **request-response**.

È stato sviluppato per la comunicazione tra **web browser** e **web server** ma può essere utilizzato anche per altri scopi.

È un protocollo **stateless** ovvero il server non salva nessun dato relativo allo stato tra due richieste.


## Header


## Metodi Request Default

### GET

### HEAD (Deprecato)

Il comando **HEAD**


### POST

Il comando **POST** normalmente aggiunge un **body** alla request inserendoci le variabili a cui io ho assegnato, per esempio, in valore all'interno di una **form**.

Solitamente le request di autenticazione con il metodo post, il server ti restituisce un **authtoken** che successivamente verrà inviato per fare una richiesta e per farti riconoscere dal sistema senza dover autenticarti ogni volta.

#### Authtoken

**L'authtoken**:
- Ha un limite di tempo, dopo il quale scade e c'è bisogno di riautenticarsi.
- È univoco per ogni client.


## Metodi Request Opzionali

> [!NOTE] NOTA 
> HTTP è un protocollo non autenticato quindi chiunque può fare richieste senza essere autenticato, quindi da anonimo

Esistono metodi opzionali che però non vengono più implementati in per il motivo spiegato nella *nota*.

- **PUT**
- **DELETE**
- **LINK**
- **UNLINK**


## COOKIE (RFC 6265)


 