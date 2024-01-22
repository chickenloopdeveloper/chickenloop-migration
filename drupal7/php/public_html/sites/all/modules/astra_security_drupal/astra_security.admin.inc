<?php

/**
 * Page callback for generating site-wide users login activity report for admins.
 */
function astra_security_admin_report() {

    $astra_path = "";

    if (file_exists(__DIR__ . "/astra/astra-config.php")) {
        require_once(__DIR__ . "/astra/astra-config.php");
    } elseif (file_exists(getcwd() . "/astra/astra-config.php")) {
        require_once(getcwd . "/astra/astra-config.php");
    }

    if (!defined("CZ_SITE_KEY")) {
        define("CZ_SITE_KEY", "");
    }

    $output = '';

    $output .= 'You can login to your Astra Dashboard simply by clicking on the links below:';
    $output .= '<ul>';
    $output .= '<li><a target="_new" href="https://www.getastra.com/a/dashboard/' . CZ_SITE_KEY . '">Dashboard</a></li>';
    $output .= '<li><a target="_new" href="https://www.getastra.com/a/threats/' . CZ_SITE_KEY . '">Threats</a></li>';
    $output .= '<li><a target="_new" href="https://www.getastra.com/a/settings/' . CZ_SITE_KEY . '">Settings</a></li>';
    $output .= '<li><a target="_new" href="https://www.getastra.com/a/support/">Support</a></li>';
    $output .= '</ul>';

    return $output;
}
