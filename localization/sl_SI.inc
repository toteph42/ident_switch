<?php
/*
 * Localization file for ident_switch plugin
 */
$labels = array();

// Plugin ident_switch
$labels['form.common.caption'] = 'Razširitev ident_switch';

// Enabled
$labels['form.common.enabled'] = 'Omogočeno';

// Label
$labels['form.common.label'] = 'Oznaka';

// Value in \'Label\' field is too long (32 chars max).
$labels['err.label.long'] = 'Število znakov v polju \'Oznaka\' presega maksimalno število znakov (max 32 znakov).';


// IMAP
$labels['form.imap.caption'] = 'IMAP';

// Server host name
$labels['form.imap.host'] = 'Ime oz. naslov IMAP strežnika';

// Secure connection (TLS)
$labels['form.imap.tls'] = 'Varna povezava (TLS)';

// Port
$labels['form.imap.port'] = 'Vrata';

// Folder hierarchy delimiter
$labels['form.imap.delimiter'] = 'Ločilo hierarhije map';

// Username
$labels['form.imap.username'] = 'Uporabniško ime';

// Password
$labels['form.imap.password'] = 'Geslo';

// Value in \'Username\' field is too long (64 chars max).
$labels['err.user.long'] = 'Število znakov v polju \'Uporabniško ime\' presega maksimalno število znakov (max 64 znakov).';


// SMTP
$labels['form.smtp.caption'] = 'SMTP';

// Server host name
$labels['form.smtp.host'] = 'Ime oz. naslov SMTP strežnika';

// Secure connection (TLS)
$labels['form.smtp.tls'] = 'Varna povezava (TLS)';

// Port
$labels['form.smtp.port'] = 'Vrata';

// Authorization
$labels['form.smtp.auth'] = 'Avtorizacija';

// As IMAP
$labels['form.smtp.auth.imap'] = 'Tako kot IMAP';

// None
$labels['form.smtp.auth.none'] = 'Brez';


// Errors

// Value in \'Server host name\' field is too long (64 chars max).
$labels['err.host.long'] = 'Število znakov v polju \'Ime oz. naslov IMAP strežnika\' presega maksimalno število znakov (max 64 znakov).';

// Value in \'Port\' field must be a number.
$labels['err.port.num'] = 'Vrednost \'Vrata\' mora biti številka.';

// Value in \'Port\' field must be between 1 and 65535.
$labels['err.port.range'] = 'Vrednost v polju \'Vrata\' mora biti med 1 in 65535.';
