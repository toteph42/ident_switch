# ident_switch plugin for Roundcube

![](https://img.shields.io/packagist/v/toteph42/ident_switch.svg)
![](https://img.shields.io/packagist/l/toteph42/ident_switch.svg)
![](https://img.shields.io/packagist/dt/toteph42/ident_switch.svg)

---------------------------------------------------------
# I created this fork, since oroginal plugin is very long not been maintained. Feel free to submit any issues or commits you have and I'll try to fix / implent them.
---------------------------------------------------------

This plugin allows users to switch between different accounts (including remote) in single Roundcube session like this:

![Screenshot example](https://i.imgur.com/rRIqtA8.jpg)

*Inspired by identities_imap plugin that is no longer supported.*

### Where to start ###
* In settings interface create new identity.
* For all identities except default you will see new section of settings - "Plugin ident_switch" (see screenshot below). Enter data required to connect to  remote server. Don't forget to check Enabled check box.
* After you have created at least one identity with active plugin you will see combobox in the top right corner instead of plain text field with account name. It will allows you to switch to another account.

### Settings ###

![Plugin settings](https://i.imgur.com/rFaHUbR.jpg)

* **Enabled** - enables plugin (i.e. account switcing) for this identity.
* **Label** - text that will be displayed in drop down list for this identity. If left blank email will be used.
* **IMAP**
    * **Server host name** - host name for imap server. If left blank 'localhost' will be used.
    * **Port** - port on server to connect to. If left blank 143 will be used.
    * **Secure connection** - enabled secure connection (TLS) *for both IMAP and SMTP*.
    * **Username** - login used *for IMAP and SMTP servers*.
    * **Password** - password used *for IMAP and SMTP servers*. It's stored encrypted in database.
* **SMTP**
    * **Server host name** - host name for imap server. If left blank 'localhost' will be used.
    * **Port** - port on server to connect to. If left blank 587 will be used.
    
### Version compatibility ###
* Versions 4.x - for Roundcube v1.3, 1.4 and 1.6.

Please specify version like "~2.0" in your composer.json file for ident_switch requirement. In this case you will stay inside compatible branch until you manually update your Roundcube installation.
