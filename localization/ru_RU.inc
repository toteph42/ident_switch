<?php
/*
 * Localization file for ident_switch plugin
 */
$labels = array();

// Plugin ident_switch
$labels['form.common.caption'] = 'Плагин ident_switch';

// Enabled
$labels['form.common.enabled'] = 'Включено';

// Label
$labels['form.common.label'] = 'Название';

// Value in \'Label\' field is too long (32 chars max).
$labels['err.label.long'] = '\'Название\' должно быть не длинее 32 символов.';


// IMAP
$labels['form.imap.caption'] = 'IMAP';

// Server host name
$labels['form.imap.host'] = 'Адрес сервера';

// Secure connection (TLS)
$labels['form.imap.tls'] = 'Безопасное подключение (TLS)';

// Port
$labels['form.imap.port'] = 'Порт';

// Folder hierarchy delimiter
$labels['form.imap.delimiter'] = 'Разделитель в иерархии папок';

// Username
$labels['form.imap.username'] = 'Имя пользователя';

// Password
$labels['form.imap.password'] = 'Пароль';

// Value in \'Username\' field is too long (64 chars max).
$labels['err.user.long'] = '\'Имя пользователя\' должно быть не длинее 64 символов.';


// SMTP
$labels['form.smtp.caption'] = 'SMTP';

// Server host name
$labels['form.smtp.host'] = 'Адрес сервера';

// Secure connection (TLS)
$labels['form.smtp.tls'] = 'Безопасное подключение (TLS)';

// Port
$labels['form.smtp.port'] = 'Порт';

// Authorization
$labels['form.smtp.auth'] = 'Авторизация';

// As IMAP
$labels['form.smtp.auth.imap'] = 'Как IMAP';

// None
$labels['form.smtp.auth.none'] = 'Нет';


// Errors

// Value in \'Server host name\' field is too long (64 chars max).
$labels['err.host.long'] = '\'Адрес сервера\' должен быть не длинее 64 символов.';

// Value in \'Port\' field must be a number.
$labels['err.port.num'] = '\'Порт\' должен быть числом.';

// Value in \'Port\' field must be between 1 and 65535.
$labels['err.port.range'] = '\'Порт\' должен быть в диапазоне от 1 до 65535.';