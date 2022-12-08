
## Opzionale

In **udp_ping** aggiungere calcolo timeout TCP, TCP implementa calcolo e cose del timeout, non si vede niente a livello applicativo

> [!NOTE] **SUGGERIMENTO:**
> Usare questo calcolo per un inseme della dimensione del messaggio.
> Non andare oltre all'**MTU** (Massima Transistion Unit).
> Copiare **udp_ping**, perandare poi ha **(CICCIO HA SCRITTO A con la H)** implementare le parti che servono per fare sta roba.
> 

> [!ABSTRACT] **CONSIGLIO**
> **LAVORA PRINCIPALMENTE SUL MAIN:**
> ciclo for ripetuto $n$ volte in cui xxxxx chiamata la funzione **do_ping** che restituisce il **RTT**  in millisecondi codificato in una variabile di tipo double.


Formuletta illustrata a lezione per il calcolo del timeout:
- $\text{estimateol} = 0.875 * \text{estimateol} + 0.125 * $

# MI DISPIACE CI HO PROVATO MA L'ULTIMO PEZZO NON RIESCO A LEGGERLO

