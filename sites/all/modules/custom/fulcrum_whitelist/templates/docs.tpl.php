<div{{ attributes.addClass('fulcrum_whitelist_docs') }}>
  <?php if docs_intro ?>
  <div class="doc_intro">
    <?php print $docs_intro; ?>
  </div>
<?php endif ?>
  <?php if docs_user ?>
  <div class="doc_user">
    <?php print $docs_user; ?>
  </div>
<?php endif ?>
  <?php if docs_admin ?>
  <div class="doc_admin">
    <?php print $docs_admin; ?>
  </div>
<?php endif ?>
</div>
