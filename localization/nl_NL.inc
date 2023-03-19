<?php
/*
 * Localization file for ident_switch plugin
 */
$labels = array();

// IMAP
$labels['form.caption'] = 'IMAP';

// Enabled
$labels['form.enabled'] = 'Inschakelen';

// Label
$labels['form.label'] = 'Label';

// Server host name
$labels['form.host']='Servernaam';

// Secure connection (SSL/TLS)
$labels['form.secure']='Beveiligingstype';

// Port
$labels['form.port']='Poortnummer';

// Username
$labels['form.username'] = 'Gebruikersnaam';

// Password
$labels['form.password'] = 'Wachtwoord';

// Folder hierarchy delimiter
$labels['form.delimiter'] = 'Map hiërarchie scheidingsteken';

// Value in \'Label\' field of IMAP section is too long (32 chars max).
$labels['err.label.long'] = 'De waarde in het veld \'Label\' is te lang! (maximaal 32 karakter is toegestaan).';

// Value in \'Server host name\' field of IMAP section is too long (64 chars max).
$labels['err.host.long'] = 'De waarde in het veld \'Servernaam\' is te lang (maximaal 64 karakter is toegestaan).';

// Value in \'Username\' field of IMAP section is too long (64 chars max).
$labels['err.user.long'] = 'De waarde in het veld \'Gebruikersnaam\' is te lang! (maximaal 64 karakter is toegestaan).';

// Value in \'Folder hierarchy delimiter\' field of IMAP section is too long (1 char max).
$labels['err.delim.long'] = 'De waarde in het veld \'Map hiërarchie scheidingsteken\' is te lang! (maximaal 1 karakter is toegestaan).';

// Value in \'Port\' field of IMAP section must be a number.
$labels['err.port.num'] = 'De waarde in het veld \'Poortnummer\' moet een nummer zijn.';

// Value in \'Port\' field of IMAP section must be between 1 and 65535.
$labels['err.port.range'] = 'De waarde in het veld \'Poortnummer\' moet tussen de 1 en 65535 zijn.';
