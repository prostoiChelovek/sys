<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html" encoding="utf-8" indent="yes"/>

  <xsl:template match="/">
    <xsl:text disable-output-escaping='yes'>&lt;!DOCTYPE html&gt;&#xA;</xsl:text>
    <html>
    <head>
    <title>documentation of darktablerc</title>
    <style>
      html {
        background-color: #575656;
        font-family: "Lucida Grande",Verdana,"Bitstream Vera Sans",Arial,sans-serif;
        font-size: 12px;
        padding: 50px 100px 50px 100px;
      }
      #content {
        background-color: #cfcece;
        border: 1px solid #000;
        padding: 0px 40px 40px 40px;
      }
      table { border-collapse: collapse; }
      td {
        padding: 5px 0px 0px 10px;
        text-align: left;
        vertical-align: top;
      }
      .head_row td {
        padding: 0px 0px 25px 0px;
        font-weight: bold;
        font-size: 14px;
      }
      .head_row td div {
        padding: 5px 5px 5px 10px;
        background-color: #bfbebd;
      }
      .second_row { padding-bottom: 5px; }
      ul { margin: 5px 0px 5px 0px; }
      .col_0 {background-color: #bfbebd;}
      .col_1 {background-color: #afadad;}
      .b_right  { border-right: 2px solid #cfcece; }
      .b_bottom { border-bottom: 2px solid #cfcece; }
      .p_bottom { padding-bottom: 5px; }
      .tt {
        font-family: Monospace;
        font-size: 14px;
      }
    </style>
    </head>
    <body>
      <div id="content">
      <div style="font-size: 42pt; font-weight: bold; color: white; text-align: right;">darktablerc</div>
      <p>
        this files gives an overview over the default settings of the darktable configuration found in
        <span class="tt">~/.config/darktable/darktablerc</span>.
        you might find some extra values in that configuration file that get generated by the code at runtime, this overview only has the default values
        that are specified during compile time. some details (like allowed range and factors when shown in the preferences dialog) are not shown here to
        not clutter the list too much. please have a look at
        <a href="https://github.com/darktable-org/darktable/blob/master/data/darktableconfig.xml.in">the corresponding source file</a> for up-to-date
        information.
      </p><br/>
      <table>
        <tr class="head_row">
          <td><div>key</div></td>
          <td><div>type</div></td>
          <td><div>default</div></td>
          <td><div>description</div></td>
        </tr>
        <xsl:for-each select="dtconfiglist/dtconfig">
          <xsl:sort select="name" order="ascending" data-type="text" />
          <xsl:text disable-output-escaping='yes'>&#xA;&lt;tr class="col_</xsl:text><xsl:value-of select="position() mod 2" /><xsl:text disable-output-escaping='yes'>"&gt;&#xA;</xsl:text>
            <td class="b_right b_bottom p_bottom tt" rowspan="2"><xsl:value-of select="name" /></td>
            <xsl:apply-templates select="type" />
            <td class="tt"><xsl:value-of select="default" /></td>
            <td><xsl:value-of select="shortdescription" /></td>
          <xsl:text disable-output-escaping='yes'>&#xA;&lt;/tr&gt;</xsl:text>
          <xsl:text disable-output-escaping='yes'>&#xA;&lt;tr class="col_</xsl:text><xsl:value-of select="position() mod 2" /><xsl:text disable-output-escaping='yes'>"&gt;&#xA;</xsl:text>
            <td colspan="3" class="second_row b_bottom"><xsl:value-of select="longdescription" /></td>
          <xsl:text disable-output-escaping='yes'>&#xA;&lt;/tr&gt;</xsl:text>
        </xsl:for-each>
      </table>
      </div>
    </body>
    </html>
  </xsl:template>

  <xsl:template match="type">
    <td><xsl:value-of select="." /></td>
  </xsl:template>

  <xsl:template match="type[./enum]">
    <td>enum<br/><ul><xsl:apply-templates /></ul></td>
  </xsl:template>

  <xsl:template match="option">
    <li><xsl:value-of select="." /></li>
  </xsl:template>

</xsl:stylesheet>