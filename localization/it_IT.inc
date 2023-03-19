<?php
/*
 * Localization file for ident_switch plugin
 */
$labels = array();

// IMAP
$labels['form.caption'] = 'IMAP';

// Enabled
$labels['form.enabled'] = 'Abilita';

// Label
$labels['form.label'] = 'Nome visualizzato';

// Server host name
$labels['form.host']='Nome del server';

// Secure connection (SSL/TLS)
$labels['form.secure']='Sicurezza della connessione';

// Port
$labels['form.port']='Porta';

// Username
$labels['form.username'] = 'Username';

// Password
$labels['form.password'] = 'Password';

// Folder hierarchy delimiter
$labels['form.delimiter'] = 'Delimitatore gerarchico delle cartelle';

// Value in \'Label\' field of IMAP section is too long (32 chars max).
$labels['err.label.long'] = 'Il valore del campo \' Nome Visualizzato\' è troppo lungo. (massimo 32 caratteri).';

// Value in \'Server host name\' field of IMAP section is too long (64 chars max).
$labels['err.host.long'] = 'Il valore del campo \'Nome del server\' della sezione IMAP è troppo lungo (massimo 64 caratteri).';

// Value in \'Username\' field of IMAP section is too long (64 chars max).
$labels['err.user.long'] = 'Il valore del campo \'Username\' della sezione IMAP  è troppo lungo (massimo 64 caratteri).';

// Value in \'Folder hierarchy delimiter\' field of IMAP section is too long (1 char max).
$labels['err.delim.long'] = 'Il valore del campo \'Delimitatore gerarchico delle cartelle\'  è troppo lungo  (massimo 1 carattere).';

// Value in \'Port\' field of IMAP section must be a number.
$labels['err.port.num'] = 'Il valore del campo \'Porta\' nella sezione IMAP deve essere un numero.';

// Value in \'Port\' field of IMAP section must be between 1 and 65535.
$labels['err.port.range'] = 'Il valore del campo \'Porta\' nella sezione IMAP deve essere compreso tra i valori 1 e 65535.';
