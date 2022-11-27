collezione(**codice**, nome, stagione, anno)

colore(**codice**, nome, tessuto)

modello(**codice**, prezzo, nome, genere, _collezione_)

dipendente(**codice_fiscale**, nome, cognome)

negozio(**codice**, denominazione, apertura, telefono)

indirizzo(_**negozio**_, nazione, località, cap, via)

lavora(_**dipendente**_, _**negozio**_, **inizio**, fine, qualifica)

abito(**codice**, taglia, _colore_, _modello_, _negozio_)

vendita(_**abito**_, _dipendente_, data, prezzo)
